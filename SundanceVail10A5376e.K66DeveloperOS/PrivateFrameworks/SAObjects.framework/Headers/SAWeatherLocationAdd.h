/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL, SAWeatherLocation;

@interface SAWeatherLocationAdd : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x34240df1; S=0x34240e6d; 
@property(retain, nonatomic) SAWeatherLocation *weatherLocation;	// G=0x34240ecd; S=0x34240f21; 
+ (id)locationAdd;	// 0x34240d61
+ (id)locationAddWithDictionary:(id)dictionary context:(id)context;	// 0x34240da5
- (id)encodedClassName;	// 0x34240d55
- (id)groupIdentifier;	// 0x34240d45
- (BOOL)requiresResponse;	// 0x34240f5d
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x34240e6d
// declared property setter: - (void)setWeatherLocation:(id)location;	// 0x34240f21
// declared property getter: - (id)targetAppId;	// 0x34240df1
// declared property getter: - (id)weatherLocation;	// 0x34240ecd
@end
