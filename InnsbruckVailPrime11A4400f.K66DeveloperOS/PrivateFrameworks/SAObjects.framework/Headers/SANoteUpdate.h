/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainCommand.h"

@class NSURL, NSString;

@interface SANoteUpdate : SADomainCommand {
}
@property(copy, nonatomic) NSString *contentsToAppend;	// G=0x326b0ac1; S=0x326b0add; 
@property(copy, nonatomic) NSURL *identifier;	// G=0x326b0b2d; S=0x326b0ba9; 
+ (id)update;	// 0x326b0a31
+ (id)updateWithDictionary:(id)dictionary context:(id)context;	// 0x326b0a75
// declared property getter: - (id)contentsToAppend;	// 0x326b0ac1
- (id)encodedClassName;	// 0x326b0a25
- (id)groupIdentifier;	// 0x326b0a15
// declared property getter: - (id)identifier;	// 0x326b0b2d
- (BOOL)requiresResponse;	// 0x326b0c09
// declared property setter: - (void)setContentsToAppend:(id)append;	// 0x326b0add
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x326b0ba9
@end
