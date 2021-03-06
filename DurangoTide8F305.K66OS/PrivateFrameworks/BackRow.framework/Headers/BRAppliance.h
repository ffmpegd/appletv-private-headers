/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "NSObject.h"


@protocol BRAppliance <NSObject>
- (id)applianceCategories;
- (id)applianceInfo;
- (id)controllerForIdentifier:(id)identifier args:(id)args;
- (BOOL)handleObjectSelection:(id)selection userInfo:(id)info;
- (BOOL)handlePlay:(id)play userInfo:(id)info;
- (id)identifierForContentAlias:(id)contentAlias;
- (id)topShelfController;
@end

