/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSDictionary, NSString;

@interface SAMetrics : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *category;	// G=0x325502fd; S=0x32550319; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSDictionary *timings;	// G=0x32550369; S=0x32550385; 
+ (id)metrics;	// 0x3255026d
+ (id)metricsWithDictionary:(id)dictionary context:(id)context;	// 0x325502b1
// declared property getter: - (id)category;	// 0x325502fd
- (id)encodedClassName;	// 0x32550261
- (id)groupIdentifier;	// 0x32550251
// declared property setter: - (void)setCategory:(id)category;	// 0x32550319
// declared property setter: - (void)setTimings:(id)timings;	// 0x32550385
// declared property getter: - (id)timings;	// 0x32550369
@end
