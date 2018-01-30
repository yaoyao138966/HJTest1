//
//  ZXRShowAlertTool.h
//  BigProject
//
//  Created by 洪江 on 2017/9/28.
//  Copyright © 2017年 Ceres. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^successBlk)();
typedef void(^failBlk)();

@interface ZXRShowAlertTool : NSObject

+ (void)showAlterWithVC:(UIViewController *)viewController  Style:(UIAlertControllerStyle)style title:(NSString *)title message:(NSString *)message success:(successBlk)success fail:(failBlk)fail;


+ (void)showAlterCustomizedWithVC:(UIViewController *)viewController  Style:(UIAlertControllerStyle)style title:(NSString *)title message:(NSString *)message successBtnTitlt:(NSString *)successBtnTitlt faileBtnTitle:(NSString *)faileBtnTitle success:(successBlk)success fail:(failBlk)fail;


@end
