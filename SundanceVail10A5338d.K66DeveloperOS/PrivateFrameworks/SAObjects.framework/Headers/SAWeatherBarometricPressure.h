/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString;

@interface SAWeatherBarometricPressure : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *trend;	// G=0x3796448d; S=0x379644a9; 
@property(copy, nonatomic) NSString *value;	// G=0x379644f9; S=0x37964515; 
+ (id)barometricPressure;	// 0x379643fd
+ (id)barometricPressureWithDictionary:(id)dictionary context:(id)context;	// 0x37964441
- (id)encodedClassName;	// 0x379643f1
- (id)groupIdentifier;	// 0x379643e1
// declared property setter: - (void)setTrend:(id)trend;	// 0x379644a9
// declared property setter: - (void)setValue:(id)value;	// 0x37964515
// declared property getter: - (id)trend;	// 0x3796448d
// declared property getter: - (id)value;	// 0x379644f9
@end
