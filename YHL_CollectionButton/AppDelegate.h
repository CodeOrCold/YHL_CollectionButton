//
//  AppDelegate.h
//  YHL_CollectionButton
//
//  Created by 杨海龙 on 2017/4/9.
//  Copyright © 2017年 杨海龙 趣高科技. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

