/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSNumber, NSURL;

@interface SALocalSearchNavigationPromptManeuver : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSNumber *maneuverIndex;	// G=0x303d7929; S=0x303d7945; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x303d784d; S=0x303d78c9; 
+ (id)navigationPromptManeuver;	// 0x303d77bd
+ (id)navigationPromptManeuverWithDictionary:(id)dictionary context:(id)context;	// 0x303d7801
- (id)encodedClassName;	// 0x303d77b1
- (id)groupIdentifier;	// 0x303d77a1
// declared property getter: - (id)maneuverIndex;	// 0x303d7929
- (BOOL)requiresResponse;	// 0x303d7995
// declared property setter: - (void)setManeuverIndex:(id)index;	// 0x303d7945
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x303d78c9
// declared property getter: - (id)targetAppId;	// 0x303d784d
@end
