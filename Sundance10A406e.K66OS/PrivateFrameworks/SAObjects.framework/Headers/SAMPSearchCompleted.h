/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseClientBoundCommand.h"

@class NSString, NSArray, NSURL;

@interface SAMPSearchCompleted : SABaseClientBoundCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *results;	// G=0x32517df9; S=0x32517e75; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x32517d1d; S=0x32517d99; 
+ (id)searchCompleted;	// 0x32517c8d
+ (id)searchCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x32517cd1
- (id)encodedClassName;	// 0x32517c81
- (id)groupIdentifier;	// 0x32517c71
- (BOOL)requiresResponse;	// 0x32517edd
// declared property getter: - (id)results;	// 0x32517df9
// declared property setter: - (void)setResults:(id)results;	// 0x32517e75
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x32517d99
// declared property getter: - (id)targetAppId;	// 0x32517d1d
@end

