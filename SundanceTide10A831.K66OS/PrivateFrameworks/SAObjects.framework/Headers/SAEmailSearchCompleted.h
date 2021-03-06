/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSArray;

@interface SAEmailSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSArray *emailResults;	// G=0x304ec13d; S=0x304ec1b9; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *results;	// G=0x304ec221; S=0x304ec2c1; 
+ (id)searchCompleted;	// 0x304ebfb5
+ (id)searchCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x304ebff9
+ (id)searchCompletedWithEmailResults:(id)emailResults;	// 0x304ec045
+ (id)searchCompletedWithResults:(id)results;	// 0x304ec08d
- (id)initWithEmailResults:(id)emailResults;	// 0x304ec0d5
- (id)initWithResults:(id)results;	// 0x304ec109
// declared property getter: - (id)emailResults;	// 0x304ec13d
- (id)encodedClassName;	// 0x304ebfa9
- (id)groupIdentifier;	// 0x304ebf99
// declared property getter: - (id)results;	// 0x304ec221
// declared property setter: - (void)setEmailResults:(id)results;	// 0x304ec1b9
// declared property setter: - (void)setResults:(id)results;	// 0x304ec2c1
@end

