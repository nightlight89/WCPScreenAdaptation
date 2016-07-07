# WCPScreenAdaptation
iOS屏幕适配 简单明了 使用方便 仅支持4s以上和竖屏，不支持横屏！！

1.UI位置首先按照5s的样式进行设计
高度适配:       heightEx(5s屏幕下的高度数值)
宽度适配:       widthEx(5s屏幕下的宽度数值)
frame整体适配:  CGRectMakeEx(5s屏幕下的位置大小)       CGRectMakeEx(10,10,40,40)=CGRectMake(widthEx(10),heightEx(10), widthEx(40), heightEx(40))效果一样，但切记不可叠加

    
    
    //2.如果frame涉及到导航栏高度64 标签栏高度49等iOS设备固定值时，仅适配其他数值
    UIView *view1=[[UIView alloc]initWithFrame:CGRectMake(0, 64, widthEx(200), heightEx(100))];
    [self.view addSubview:view1];
    view1.backgroundColor=[UIColor redColor];
    
    //3.不涉及固定值或相对位置值
    UIView *view2=[[UIView alloc]initWithFrame:CGRectMakeEx(10,10, 40, 40)];
    [view1 addSubview:view2];
    view2.backgroundColor=[UIColor greenColor];
    
    //4.如果涉及到相对位置时
    UIView *view3=[[UIView alloc]initWithFrame:CGRectMake(widthEx(10),view1.frame.size.height+view1.frame.origin.y, widthEx(40), heightEx(40))];
    [self.view addSubview:view3];
    view3.backgroundColor=[UIColor yellowColor];
    
    //5.比较特殊的一种情况 由于4s屏幕宽度与高度 与5s宽度与高度 之比不相等
    /*
     4s    w=320.000000 h=480.000000 rator=0.666667     3.5
     5     w=320.000000 h=568.000000 rator=0.563380     4
     5s    w=320.000000 h=568.000000 rator=0.563380
     6     w=375.000000 h=667.000000 rator=0.562219     4.7
     6p    w=414.000000 h=736.000000 rator=0.562500
     6s p  w=414.000000 h=736.000000 rator=0.562500
     适配策略, 设计的以iPhones5作为基准, 6和6p等比例方法
     
     5s/4s:
        320/320=1.0000     568/480=1.1833
     5s/6:
        320/375=0.8533     568/667=0.8517
     5s/6p:
        320/414=0.7729     568/736=0.7717
     */
    //所以4s与5s界面位置一样，当由于高度比的问题故涉及到5s的高度568时，一律使用[UIScreen mainScreen].bounds.size.height表示
    //但宽度尽量使用320具体数值表示
    UIView *view4=[[UIView alloc]initWithFrame:CGRectMake(widthEx(10),[UIScreen mainScreen].bounds.size.height-heightEx(80), widthEx(320),heightEx(40))];
    [self.view addSubview:view4];
    view4.backgroundColor=[UIColor blueColor];
    
    
    //6.如果一个.m文件内全是属于第三种情况，可以只用添加头文件 #import "WCPScreenAdaptation.h" 即可适配当前页面

    //7.还有其他数值的适配时一样的道理（cell的高度等等。。。）
    //cell.rowHeight=heightEx(60);
    
