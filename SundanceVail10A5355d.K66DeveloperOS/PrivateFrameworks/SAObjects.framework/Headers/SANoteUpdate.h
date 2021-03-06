/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSURL;

@interface SANoteUpdate : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString *contentsToAppend;	// G=0x3660dd01; S=0x3660dd1d; 
@property(copy, nonatomic) NSURL *identifier;	// G=0x3660dd6d; S=0x3660dde9; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x3660dc25; S=0x3660dca1; 
+ (id)update;	// 0x3660db95
+ (id)updateWithDictionary:(id)dictionary context:(id)context;	// 0x3660dbd9
// declared property getter: - (id)contentsToAppend;	// 0x3660dd01
- (id)encodedClassName;	// 0x3660db89
- (id)groupIdentifier;	// 0x3660db79
// declared property getter: - (id)identifier;	// 0x3660dd6d
- (BOOL)requiresResponse;	// 0x3660de49
// declared property setter: - (void)setContentsToAppend:(id)append;	// 0x3660dd1d
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x3660dde9
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x3660dca1
// declared property getter: - (id)targetAppId;	// 0x3660dc25
@end

