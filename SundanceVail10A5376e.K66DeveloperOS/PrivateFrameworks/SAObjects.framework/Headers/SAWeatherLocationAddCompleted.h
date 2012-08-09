/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSURL;

@interface SAWeatherLocationAddCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *error;	// G=0x34241105; S=0x34241121; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSURL *weatherLocationId;	// G=0x34241171; S=0x342411ed; 
+ (id)locationAddCompleted;	// 0x34240f7d
+ (id)locationAddCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x34240fc1
+ (id)locationAddCompletedWithError:(id)error;	// 0x3424100d
+ (id)locationAddCompletedWithWeatherLocationId:(id)weatherLocationId;	// 0x34241055
- (id)initWithError:(id)error;	// 0x3424109d
- (id)initWithWeatherLocationId:(id)weatherLocationId;	// 0x342410d1
- (id)encodedClassName;	// 0x34240f71
// declared property getter: - (id)error;	// 0x34241105
- (id)groupIdentifier;	// 0x34240f61
// declared property setter: - (void)setError:(id)error;	// 0x34241121
// declared property setter: - (void)setWeatherLocationId:(id)anId;	// 0x342411ed
// declared property getter: - (id)weatherLocationId;	// 0x34241171
@end
