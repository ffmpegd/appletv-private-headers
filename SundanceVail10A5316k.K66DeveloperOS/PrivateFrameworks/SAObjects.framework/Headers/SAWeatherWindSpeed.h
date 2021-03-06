/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSNumber, NSString;

@interface SAWeatherWindSpeed : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *value;	// G=0x32f4ed2d; S=0x32f4ed49; 
@property(copy, nonatomic) NSString *windDirection;	// G=0x32f4ed99; S=0x32f4edb5; 
@property(retain, nonatomic) NSNumber *windDirectionDegree;	// G=0x32f4ee05; S=0x32f4ee21; 
+ (id)windSpeed;	// 0x32f4ec9d
+ (id)windSpeedWithDictionary:(id)dictionary context:(id)context;	// 0x32f4ece1
- (id)encodedClassName;	// 0x32f4ec91
- (id)groupIdentifier;	// 0x32f4ec81
// declared property setter: - (void)setValue:(id)value;	// 0x32f4ed49
// declared property setter: - (void)setWindDirection:(id)direction;	// 0x32f4edb5
// declared property setter: - (void)setWindDirectionDegree:(id)degree;	// 0x32f4ee21
// declared property getter: - (id)value;	// 0x32f4ed2d
// declared property getter: - (id)windDirection;	// 0x32f4ed99
// declared property getter: - (id)windDirectionDegree;	// 0x32f4ee05
@end

