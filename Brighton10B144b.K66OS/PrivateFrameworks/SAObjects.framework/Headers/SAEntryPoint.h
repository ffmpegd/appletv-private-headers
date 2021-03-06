/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSNumber;

@interface SAEntryPoint : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSNumber *latitude;	// G=0x35400665; S=0x35400681; 
@property(copy, nonatomic) NSNumber *longitude;	// G=0x354006d1; S=0x354006ed; 
+ (id)entryPoint;	// 0x354005d5
+ (id)entryPointWithDictionary:(id)dictionary context:(id)context;	// 0x35400619
- (id)encodedClassName;	// 0x354005c9
- (id)groupIdentifier;	// 0x354005b9
// declared property getter: - (id)latitude;	// 0x35400665
// declared property getter: - (id)longitude;	// 0x354006d1
// declared property setter: - (void)setLatitude:(id)latitude;	// 0x35400681
// declared property setter: - (void)setLongitude:(id)longitude;	// 0x354006ed
@end

