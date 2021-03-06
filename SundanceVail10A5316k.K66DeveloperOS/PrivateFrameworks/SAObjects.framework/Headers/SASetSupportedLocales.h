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
@property(copy, nonatomic) NSArray *locales;	// G=0x32f55411; S=0x32f5542d; 
+ (id)setSupportedLocales;	// 0x32f55381
+ (id)setSupportedLocalesWithDictionary:(id)dictionary context:(id)context;	// 0x32f553c5
- (id)encodedClassName;	// 0x32f55375
- (id)groupIdentifier;	// 0x32f55365
// declared property getter: - (id)locales;	// 0x32f55411
- (BOOL)requiresResponse;	// 0x32f5547d
// declared property setter: - (void)setLocales:(id)locales;	// 0x32f5542d
@end

