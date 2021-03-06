/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSData;

@interface SASetActivationToken : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSData *activationToken;	// G=0x326f42ed; S=0x326f4309; 
@property(copy, nonatomic) NSString *language;	// G=0x326f4359; S=0x326f4375; 
+ (id)setActivationToken;	// 0x326f425d
+ (id)setActivationTokenWithDictionary:(id)dictionary context:(id)context;	// 0x326f42a1
// declared property getter: - (id)activationToken;	// 0x326f42ed
- (id)encodedClassName;	// 0x326f4251
- (id)groupIdentifier;	// 0x326f4241
// declared property getter: - (id)language;	// 0x326f4359
- (BOOL)requiresResponse;	// 0x326f43c5
// declared property setter: - (void)setActivationToken:(id)token;	// 0x326f4309
// declared property setter: - (void)setLanguage:(id)language;	// 0x326f4375
@end

