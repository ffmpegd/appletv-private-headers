/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class SAWeatherLocation, NSURL;

@interface SAWeatherLocationAdd : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x32f4d2e1; S=0x32f4d35d; 
@property(retain, nonatomic) SAWeatherLocation *weatherLocation;	// G=0x32f4d3bd; S=0x32f4d411; 
+ (id)locationAdd;	// 0x32f4d251
+ (id)locationAddWithDictionary:(id)dictionary context:(id)context;	// 0x32f4d295
- (id)encodedClassName;	// 0x32f4d245
- (id)groupIdentifier;	// 0x32f4d235
- (BOOL)requiresResponse;	// 0x32f4d44d
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x32f4d35d
// declared property setter: - (void)setWeatherLocation:(id)location;	// 0x32f4d411
// declared property getter: - (id)targetAppId;	// 0x32f4d2e1
// declared property getter: - (id)weatherLocation;	// 0x32f4d3bd
@end
