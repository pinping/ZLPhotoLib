//
//  ZLAssets.h
//  ZLAssetsPickerDemo
//
//  Created by 张磊 on 15-1-3.
//  Copyright (c) 2015年 com.zixue101.www. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>

@interface ZLAssets : NSObject

@property (strong,nonatomic) ALAsset *asset;
/**
 *  缩略图
 */
- (UIImage *)thumbImage;

/**
 *  原图
 */
- (UIImage *)originImage;

@end
