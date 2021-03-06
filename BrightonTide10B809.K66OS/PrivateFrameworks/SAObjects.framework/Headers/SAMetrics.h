/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSString, NSDictionary;

@interface SAMetrics : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *category;	// G=0x3540297d; S=0x35402999; 
@property(copy, nonatomic) NSString *originalCommandId;	// G=0x354029e9; S=0x35402a05; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSDictionary *timings;	// G=0x35402a55; S=0x35402a71; 
+ (id)metrics;	// 0x354028ed
+ (id)metricsWithDictionary:(id)dictionary context:(id)context;	// 0x35402931
// declared property getter: - (id)category;	// 0x3540297d
- (id)encodedClassName;	// 0x354028e1
- (id)groupIdentifier;	// 0x354028d1
// declared property getter: - (id)originalCommandId;	// 0x354029e9
// declared property setter: - (void)setCategory:(id)category;	// 0x35402999
// declared property setter: - (void)setOriginalCommandId:(id)anId;	// 0x35402a05
// declared property setter: - (void)setTimings:(id)timings;	// 0x35402a71
// declared property getter: - (id)timings;	// 0x35402a55
@end

