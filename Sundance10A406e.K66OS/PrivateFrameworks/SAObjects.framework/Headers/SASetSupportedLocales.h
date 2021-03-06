/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSArray;

@interface SASetSupportedLocales : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSArray *locales;	// G=0x325330e9; S=0x32533105; 
+ (id)setSupportedLocales;	// 0x32533059
+ (id)setSupportedLocalesWithDictionary:(id)dictionary context:(id)context;	// 0x3253309d
- (id)encodedClassName;	// 0x3253304d
- (id)groupIdentifier;	// 0x3253303d
// declared property getter: - (id)locales;	// 0x325330e9
- (BOOL)requiresResponse;	// 0x32533155
// declared property setter: - (void)setLocales:(id)locales;	// 0x32533105
@end

