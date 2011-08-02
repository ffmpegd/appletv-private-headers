/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRSingleton.h"

@class NSMutableArray, NSArray;

@interface BRApplianceManager : BRSingleton {
@private
	NSMutableArray *_applianceList;	// 4 = 0x4
	NSArray *appliances;	// 8 = 0x8
}
@property(retain) NSArray *appliances;	// G=0x32fb3801; S=0x32fb3819; @synthesize
+ (void)setSingleton:(id)singleton;	// 0x32f19221
+ (void)showMainMenu;	// 0x32fb3621
+ (id)singleton;	// 0x32f19215
- (id)init;	// 0x32fb3049
- (id)_applianceForInfo:(id)info;	// 0x32f1e319
- (id)_controllerForApplianceKey:(id)applianceKey identifier:(id)identifier args:(id)args;	// 0x32fb31fd
- (BOOL)_handlePlay:(id)play userInfo:(id)info;	// 0x32fb3095
- (id)_loadApplianceAtPath:(id)path;	// 0x32f193d5
- (void)_loadAppliancesInFolder:(id)folder;	// 0x32f19285
- (id)applianceForInfo:(id)info;	// 0x32f1e305
- (id)applianceInfoList;	// 0x32f1d695
// declared property getter: - (id)appliances;	// 0x32fb3801
- (id)controllerForApplianceInfo:(id)applianceInfo identifier:(id)identifier args:(id)args;	// 0x32fb3591
- (id)controllerForApplianceKey:(id)applianceKey identifier:(id)identifier args:(id)args;	// 0x32fb3671
- (void)dealloc;	// 0x32fb35b9
- (BOOL)handleObjectSelection:(id)selection userInfo:(id)info;	// 0x32fb350d
- (BOOL)handlePlay:(id)play userInfo:(id)info;	// 0x32fb3489
- (void)loadAppliances;	// 0x32f1922d
// declared property setter: - (void)setAppliances:(id)appliances;	// 0x32fb3819
@end
