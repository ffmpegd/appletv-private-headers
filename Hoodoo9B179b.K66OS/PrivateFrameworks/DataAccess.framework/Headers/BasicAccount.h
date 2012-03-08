/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <BasicAccount.h> // Unknown library


@interface BasicAccount (DAChildAccountExtensions)
- (id)childAccountPropertiesArrayBySettingChildProperties:(id)properties forChildAccountType:(id)childAccountType;	// 0x3119a58d
- (id)childPropertiesForAccountType:(id)accountType defaultProperties:(id)properties outParentNeedsSave:(BOOL *)save;	// 0x3119a4ad
@end

@interface BasicAccount (DAMMeExtras)
- (BOOL)isValidDAMMeAccount;	// 0x311a280d
- (id)subscribedCalendarRecords;	// 0x311a28c1
@end

@interface BasicAccount (DAIMAPNotesExtensions)
- (BOOL)accountClassStringIsIMAPSubclass;	// 0x311a641d
- (BOOL)accountTypeStringIsIMAPSubclass;	// 0x311a6375
- (BOOL)accountTypeStringOwnsIMAPChild;	// 0x311a64ed
- (BOOL)isValidIMAPNotesAccount;	// 0x311a656d
@end

@interface BasicAccount (DACalDAVChildExtensions)
- (BOOL)accountPropertiesHaveCalDAVEnabled:(id)enabled;	// 0x311a6f99
- (BOOL)accountTypeStringCanOwnCalDAVAccounts;	// 0x311a6ef1
- (BOOL)isValidCalDAVChildAccount;	// 0x311a705d
@end

@interface BasicAccount (DACardDAVChildExtensions)
- (BOOL)accountPropertiesHaveCardDAVEnabled:(id)enabled;	// 0x311a7279
- (BOOL)accountTypeStringCanOwnCardDAVAccounts;	// 0x311a7211
- (BOOL)isValidCardDAVChildAccount;	// 0x311a7309
@end

@interface BasicAccount (BookmarkDAVChildExtensions)
- (BOOL)accountPropertiesHaveBookmarkDAVEnabled:(id)enabled;	// 0x311ac9e9
- (BOOL)accountTypeStringCanOwnBookmarkDAVAccounts;	// 0x311ac9a9
- (BOOL)isValidBookmarkDAVChildAccount;	// 0x311aca79
@end
