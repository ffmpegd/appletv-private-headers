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
	NSString *_password;	// 36 = 0x24
}
@property(retain) NSString *password;	// G=0x3fb539; S=0x3fb549; converted property
- (void)_readProtectedInfo:(id)info;	// 0x3fb681
- (void)_writeProtectedInfo:(id)info;	// 0x3fb635
- (void)dealloc;	// 0x3fb4ed
// converted property getter: - (id)password;	// 0x3fb539
// converted property setter: - (void)setPassword:(id)password;	// 0x3fb549
@end

