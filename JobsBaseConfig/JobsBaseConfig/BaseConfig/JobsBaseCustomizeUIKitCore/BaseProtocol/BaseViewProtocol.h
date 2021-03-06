//
//  BaseViewProtocol.h
//  DouDong-II
//
//  Created by Jobs on 2021/3/22.
//

#import <Foundation/Foundation.h>
#import "BaseProtocol.h"
@class UIViewModel;

NS_ASSUME_NONNULL_BEGIN

@protocol BaseViewProtocol <BaseProtocol>

@optional

@property(nonatomic,assign)CGSize viewSize;
@property(nonatomic,assign)CGRect viewRect;
@property(nonatomic,assign)CGFloat viewWidth;
@property(nonatomic,assign)CGFloat viewHeight;

//具体由子类进行复写【数据定UI】【如果所传参数为基本数据类型，那么包装成对象NSNumber进行转化承接】
-(void)richElementsInViewWithModel:(id _Nullable)model;
//具体由子类进行复写【数据定宽】【如果所传参数为基本数据类型，那么包装成对象NSNumber进行转化承接】
+(CGFloat)viewWidthWithModel:(id _Nullable)model;
//具体由子类进行复写【数据定高】【如果所传参数为基本数据类型，那么包装成对象NSNumber进行转化承接】
+(CGFloat)viewHeightWithModel:(id _Nullable)model;
//具体由子类进行复写【数据尺寸】【如果所传参数为基本数据类型，那么包装成对象NSNumber进行转化承接】
+(CGSize)viewSizeWithModel:(id _Nullable)model;
//具体由子类进行复写【数据Frame】【如果所传参数为基本数据类型，那么包装成对象NSNumber进行转化承接】
+(CGRect)viewFrameWithModel:(id _Nullable)model;
//数据（字符串）定宽
+(CGFloat)widthByData:(UIViewModel *_Nonnull)data;
//数据（字符串）定高
+(CGFloat)heightByData:(UIViewModel *_Nonnull)data;
///下拉刷新 （子类要进行覆写）
-(void)pullToRefresh;
///上拉加载更多 （子类要进行覆写）
-(void)loadMoreRefresh;

@end

NS_ASSUME_NONNULL_END
