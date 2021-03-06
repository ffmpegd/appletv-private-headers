/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class SAWeatherBarometricPressure, SAWeatherWindSpeed, SAWeatherCondition, NSNumber, NSString;

@interface SAWeatherCurrentConditions : AceObject <SAAceSerializable> {
}
@property(retain, nonatomic) SAWeatherBarometricPressure *barometricPressure;	// G=0x355b53fd; S=0x355b5451; 
@property(retain, nonatomic) SAWeatherCondition *condition;	// G=0x355b548d; S=0x355b54e1; 
@property(retain, nonatomic) NSNumber *dayOfWeek;	// G=0x355b551d; S=0x355b5539; 
@property(copy, nonatomic) NSString *dewPoint;	// G=0x355b5555; S=0x355b5571; 
@property(copy, nonatomic) NSString *feelsLike;	// G=0x355b55c1; S=0x355b55dd; 
@property(copy, nonatomic) NSString *heatIndex;	// G=0x355b562d; S=0x355b5649; 
@property(copy, nonatomic) NSString *moonPhase;	// G=0x355b5699; S=0x355b56b5; 
@property(copy, nonatomic) NSString *percentHumidity;	// G=0x355b5705; S=0x355b5721; 
@property(retain, nonatomic) NSNumber *percentOfMoonFaceVisible;	// G=0x355b5771; S=0x355b578d; 
@property(copy, nonatomic) NSString *sunrise;	// G=0x355b57a9; S=0x355b57c5; 
@property(copy, nonatomic) NSString *sunset;	// G=0x355b5815; S=0x355b5831; 
@property(copy, nonatomic) NSString *temperature;	// G=0x355b5881; S=0x355b589d; 
@property(copy, nonatomic) NSString *timeOfObservation;	// G=0x355b58ed; S=0x355b5909; 
@property(copy, nonatomic) NSString *timeZone;	// G=0x355b5959; S=0x355b5975; 
@property(copy, nonatomic) NSString *visibility;	// G=0x355b59c5; S=0x355b59e1; 
@property(copy, nonatomic) NSString *windChill;	// G=0x355b5a31; S=0x355b5a4d; 
@property(retain, nonatomic) SAWeatherWindSpeed *windSpeed;	// G=0x355b5a9d; S=0x355b5af1; 
+ (id)currentConditions;	// 0x355b536d
+ (id)currentConditionsWithDictionary:(id)dictionary context:(id)context;	// 0x355b53b1
// declared property getter: - (id)barometricPressure;	// 0x355b53fd
// declared property getter: - (id)condition;	// 0x355b548d
// declared property getter: - (id)dayOfWeek;	// 0x355b551d
// declared property getter: - (id)dewPoint;	// 0x355b5555
- (id)encodedClassName;	// 0x355b5361
// declared property getter: - (id)feelsLike;	// 0x355b55c1
- (id)groupIdentifier;	// 0x355b5351
// declared property getter: - (id)heatIndex;	// 0x355b562d
// declared property getter: - (id)moonPhase;	// 0x355b5699
// declared property getter: - (id)percentHumidity;	// 0x355b5705
// declared property getter: - (id)percentOfMoonFaceVisible;	// 0x355b5771
// declared property setter: - (void)setBarometricPressure:(id)pressure;	// 0x355b5451
// declared property setter: - (void)setCondition:(id)condition;	// 0x355b54e1
// declared property setter: - (void)setDayOfWeek:(id)week;	// 0x355b5539
// declared property setter: - (void)setDewPoint:(id)point;	// 0x355b5571
// declared property setter: - (void)setFeelsLike:(id)like;	// 0x355b55dd
// declared property setter: - (void)setHeatIndex:(id)index;	// 0x355b5649
// declared property setter: - (void)setMoonPhase:(id)phase;	// 0x355b56b5
// declared property setter: - (void)setPercentHumidity:(id)humidity;	// 0x355b5721
// declared property setter: - (void)setPercentOfMoonFaceVisible:(id)moonFaceVisible;	// 0x355b578d
// declared property setter: - (void)setSunrise:(id)sunrise;	// 0x355b57c5
// declared property setter: - (void)setSunset:(id)sunset;	// 0x355b5831
// declared property setter: - (void)setTemperature:(id)temperature;	// 0x355b589d
// declared property setter: - (void)setTimeOfObservation:(id)observation;	// 0x355b5909
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x355b5975
// declared property setter: - (void)setVisibility:(id)visibility;	// 0x355b59e1
// declared property setter: - (void)setWindChill:(id)chill;	// 0x355b5a4d
// declared property setter: - (void)setWindSpeed:(id)speed;	// 0x355b5af1
// declared property getter: - (id)sunrise;	// 0x355b57a9
// declared property getter: - (id)sunset;	// 0x355b5815
// declared property getter: - (id)temperature;	// 0x355b5881
// declared property getter: - (id)timeOfObservation;	// 0x355b58ed
// declared property getter: - (id)timeZone;	// 0x355b5959
// declared property getter: - (id)visibility;	// 0x355b59c5
// declared property getter: - (id)windChill;	// 0x355b5a31
// declared property getter: - (id)windSpeed;	// 0x355b5a9d
@end

