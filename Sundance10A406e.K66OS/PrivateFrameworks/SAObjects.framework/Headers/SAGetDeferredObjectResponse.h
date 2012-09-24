/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"


@interface SAGetDeferredObjectResponse : SABaseClientBoundCommand {
}
@property(retain, nonatomic) id<SAAceSerializable> object;	// G=0x3254cae9; S=0x3254cb3d; 
+ (id)getDeferredObjectResponse;	// 0x3254ca59
+ (id)getDeferredObjectResponseWithDictionary:(id)dictionary context:(id)context;	// 0x3254ca9d
- (id)encodedClassName;	// 0x3254ca4d
- (id)groupIdentifier;	// 0x3254ca3d
// declared property getter: - (id)object;	// 0x3254cae9
- (BOOL)requiresResponse;	// 0x3254cb79
// declared property setter: - (void)setObject:(id)object;	// 0x3254cb3d
@end
