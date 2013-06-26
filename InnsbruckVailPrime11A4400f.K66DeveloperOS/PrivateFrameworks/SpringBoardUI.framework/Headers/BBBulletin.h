/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <BulletinBoard/BBBulletin.h>


@interface BBBulletin (SBUIUtilities)
+ (void)killSounds;	// 0x3277b315
- (id)actionBlockForButton:(id)button;	// 0x3277b7ad
- (id)actionBlockForButton:(id)button withOrigin:(int)origin;	// 0x3277b731
- (BOOL)bulletinAlertShouldOverrideQuietMode;	// 0x3277b7c1
- (id)defaultActionBlock;	// 0x3277b799
- (id)defaultActionBlockWithOrigin:(int)origin;	// 0x3277b69d
- (id)defaultActionBlockWithOrigin:(int)origin canBypassPinLock:(BOOL *)lock requiresUnlock:(BOOL *)unlock shouldDeactivateAwayController:(BOOL *)controller suitabilityFilter:(id)filter;	// 0x3277b3c1
- (void)killSound;	// 0x3277b385
- (BOOL)playSound;	// 0x3277b34d
@end
