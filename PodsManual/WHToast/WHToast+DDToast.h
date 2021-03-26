//
//  WHToast+DDToast.h
//  DouDong-II
//
//  Created by Jobs on 2021/1/10.
//

#if __has_include(<WHToast/WHToast.h>)
#import <WHToast/WHToast.h>
#else
#import "WHToast.h"
#endif

NS_ASSUME_NONNULL_BEGIN

@interface WHToast (DDToast)
/** 仅文字，展示在屏幕中间 */
+(void)toastMsg:(NSString *)msg;
/** 失败图标和文字，展示在屏幕中间 */
+(void)toastErrMsg:(NSString *)errMsg;
/** 成功图标和文字，展示在屏幕中间 */
+(void)toastSuccessMsg:(NSString *)successMsg;
/** 延时操作 */
+(void)toastLoading;
/** 手动关闭WHToast，在主线程*/
+(void)toastHide;

@end

NS_ASSUME_NONNULL_END
