/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h> // Unknown library


@interface __NSCFMemoryURLCredentialStorage : NSObject {
}
+ (void)initialize;	// 0x2cf130dd
- (id)init;	// 0x2cf13175
- (id)allCredentials;	// 0x2cf131d9
- (id)credentialsForProtectionSpace:(id)protectionSpace;	// 0x2cf131d5
- (id)defaultCredentialForProtectionSpace:(id)protectionSpace;	// 0x2cf131e5
- (id)description;	// 0x2cf13179
- (void)removeCredential:(id)credential forProtectionSpace:(id)protectionSpace;	// 0x2cf131e1
- (void)setCredential:(id)credential forProtectionSpace:(id)protectionSpace;	// 0x2cf131dd
- (void)setDefaultCredential:(id)credential forProtectionSpace:(id)protectionSpace;	// 0x2cf131e9
@end

