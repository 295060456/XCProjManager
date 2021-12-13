//
//  JobsBaseConfigPodsManual.h
//  JobsBaseConfig
//
//  Created by Jobs on 2021/12/13.
//

#ifndef JobsBaseConfigPodsManual_h
#define JobsBaseConfigPodsManual_h

// 极大程度上尊重作者，不去污染源代码的基础上，用分类去实现一些功能

#import "EmptyView.h"
#import "ZMJCell+CustomView.h"
#import "FMDatabase+Manager.h"
#import "ECPrivacyCheckTools.h"
/// JXCategoryView
#import "JXCategoryTimelineView.h"
#import "JXCategoryTitleBackgroundView.h"
/// RAC_Define
#if __has_include(<ReactiveObjC/RACEXTKeyPathCoding.h>)
#else
#import "RACEXTKeyPathCoding.h"
#endif

#if __has_include(<ReactiveObjC/RACEXTScope.h>)
#else
#import "RACEXTScope.h"
#endif

#if __has_include(<ReactiveObjC/RACmetamacros.h>)
#else
#import "RACmetamacros.h"
#endif

#if __has_include(<ReactiveObjC/RACEXTRuntimeExtensions.h>)
#else
#import "RACEXTRuntimeExtensions.h"
#endif

#if __has_include(<XHLaunchAd/XHLaunchAd.h>)
#import <XHLaunchAd/XHLaunchAd.h>
#else
#import "XHLaunchAd.h"
#endif

#endif /* JobsBaseConfigPodsManual_h */
