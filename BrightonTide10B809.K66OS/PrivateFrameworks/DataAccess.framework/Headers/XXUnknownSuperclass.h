/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface XXUnknownSuperclass (AccountsdPrivate)
- (id)_initHoppingBasicAccount;	// 0x3394c709
@end

@interface XXUnknownSuperclass (DAChildAccountExtensions)
- (id)childAccountPropertiesArrayBySettingChildProperties:(id)properties forChildAccountType:(id)childAccountType;	// 0x3395fc49
- (id)childPropertiesForAccountType:(id)accountType defaultProperties:(id)properties outParentNeedsSave:(BOOL *)save;	// 0x3395fb61
@end

@interface XXUnknownSuperclass (DAMMeExtras)
- (BOOL)hasActiveDAMMeAccounts;	// 0x33968809
@end

@interface XXUnknownSuperclass (DAMMeExtras)
- (BOOL)isValidDAMMeAccount;	// 0x339688dd
- (id)subscribedCalendarRecords;	// 0x33968999
@end

@interface XXUnknownSuperclass (DAIMAPNotesExtensions)
- (BOOL)hasActiveIMAPNotesAccounts;	// 0x3396c811
@end

@interface XXUnknownSuperclass (DAIMAPNotesExtensions)
- (BOOL)accountClassStringIsIMAPSubclass;	// 0x3396c989
- (BOOL)accountTypeStringIsIMAPSubclass;	// 0x3396c8e5
- (BOOL)accountTypeStringOwnsIMAPChild;	// 0x3396ca55
- (BOOL)isValidIMAPNotesAccount;	// 0x3396cad1
@end

@interface XXUnknownSuperclass (DACalDAVChildExtensions)
- (BOOL)hasActiveCalDAVChildAccounts;	// 0x3396d4a5
@end

@interface XXUnknownSuperclass (DACalDAVChildExtensions)
- (BOOL)accountPropertiesHaveCalDAVEnabled:(id)enabled;	// 0x3396d61d
- (BOOL)accountTypeStringCanOwnCalDAVAccounts;	// 0x3396d579
- (BOOL)isValidCalDAVChildAccount;	// 0x3396d6e5
@end

@interface XXUnknownSuperclass (DACardDAVChildExtensions)
- (BOOL)hasActiveCardDAVChildAccounts;	// 0x3396d7e5
@end

@interface XXUnknownSuperclass (DACardDAVChildExtensions)
- (BOOL)accountPropertiesHaveCardDAVEnabled:(id)enabled;	// 0x3396d91d
- (BOOL)accountTypeStringCanOwnCardDAVAccounts;	// 0x3396d8b9
- (BOOL)isValidCardDAVChildAccount;	// 0x3396d9ad
@end

@interface XXUnknownSuperclass (BookmarkDAVChildExtensions)
- (BOOL)hasActiveBookmarkDAVChildAccounts;	// 0x33973a8d
@end

@interface XXUnknownSuperclass (BookmarkDAVChildExtensions)
- (BOOL)accountPropertiesHaveBookmarkDAVEnabled:(id)enabled;	// 0x33973b9d
- (BOOL)accountTypeStringCanOwnBookmarkDAVAccounts;	// 0x33973b61
- (BOOL)isValidBookmarkDAVChildAccount;	// 0x33973c2d
@end
