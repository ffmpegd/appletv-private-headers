/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MEITunesAccount.h"

@class NSString, NSDate, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MEITunesStoreAccount : MEITunesAccount {
	NSDate *_lastAuthenticationDate;	// 40 = 0x28
	NSMutableDictionary *_authDictionary;	// 44 = 0x2c
	NSString *_dsidHash;	// 48 = 0x30
}
@property(retain) NSString *dsidHash;	// G=0xd8ed; S=0xd901; @synthesize=_dsidHash
+ (int)_currentVersion;	// 0xcc05
- (id)initWithAccountName:(id)accountName;	// 0xcc09
- (id)initWithCoder:(id)coder;	// 0xcd45
- (void).cxx_destruct;	// 0xd911
- (id)_hashDSID:(id)dsid;	// 0xdb35
- (void)_readProtectedInfo:(id)info;	// 0xd6a5
- (void)_resetSession;	// 0xd339
- (void)_upgradeToVersion2;	// 0xd959
- (void)_writeProtectedInfo:(id)info;	// 0xd589
// declared property getter: - (id)dsidHash;	// 0xd8ed
- (BOOL)isAuthenticated;	// 0xd2f1
- (id)metadataValueForKey:(id)key;	// 0xce91
- (void)setAuthDictionary:(id)dictionary;	// 0xd391
// declared property setter: - (void)setDsidHash:(id)hash;	// 0xd901
- (void)setLastAuthenticationDate:(id)date;	// 0xd561
- (void)setMetadataValue:(id)value forKey:(id)key;	// 0xd0c5
- (id)type;	// 0xd2d1
- (void)willBeDeleted;	// 0xd7b1
@end

