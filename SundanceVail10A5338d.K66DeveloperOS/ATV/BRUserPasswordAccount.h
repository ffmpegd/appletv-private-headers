/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRAccount.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface BRUserPasswordAccount : BRAccount {
	NSString *_password;	// 40 = 0x28
}
@property(retain) NSString *password;	// G=0x343e6d; S=0x343e7d; converted property
- (void)_readProtectedInfo:(id)info;	// 0x343fb5
- (void)_writeProtectedInfo:(id)info;	// 0x343f69
- (void)dealloc;	// 0x343e21
// converted property getter: - (id)password;	// 0x343e6d
// converted property setter: - (void)setPassword:(id)password;	// 0x343e7d
@end

