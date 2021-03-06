/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class SAWeatherCondition, NSNumber;

@interface SAWeatherForecast : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSNumber *chanceOfPrecipitation;	// G=0x34240701; S=0x3424071d; 
@property(retain, nonatomic) SAWeatherCondition *condition;	// G=0x3424076d; S=0x342407c1; 
@property(copy, nonatomic) NSNumber *isUserRequested;	// G=0x342407fd; S=0x34240819; 
@property(copy, nonatomic) NSNumber *timeIndex;	// G=0x34240869; S=0x34240885; 
+ (id)forecast;	// 0x34240671
+ (id)forecastWithDictionary:(id)dictionary context:(id)context;	// 0x342406b5
// declared property getter: - (id)chanceOfPrecipitation;	// 0x34240701
// declared property getter: - (id)condition;	// 0x3424076d
- (id)encodedClassName;	// 0x34240665
- (id)groupIdentifier;	// 0x34240655
// declared property getter: - (id)isUserRequested;	// 0x342407fd
// declared property setter: - (void)setChanceOfPrecipitation:(id)precipitation;	// 0x3424071d
// declared property setter: - (void)setCondition:(id)condition;	// 0x342407c1
// declared property setter: - (void)setIsUserRequested:(id)requested;	// 0x34240819
// declared property setter: - (void)setTimeIndex:(id)index;	// 0x34240885
// declared property getter: - (id)timeIndex;	// 0x34240869
@end

