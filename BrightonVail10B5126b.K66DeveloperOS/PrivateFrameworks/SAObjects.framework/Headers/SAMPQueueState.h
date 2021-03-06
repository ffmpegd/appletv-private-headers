/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABackgroundContextObject.h"
#import "AceObject.h"

@class NSString, SAMPMediaItem;

@interface SAMPQueueState : AceObject <SABackgroundContextObject> {
}
@property(copy, nonatomic) NSString *applicationIdentifier;	// G=0x353fffa5; S=0x353fffc1; 
@property(retain, nonatomic) SAMPMediaItem *listeningToItem;	// G=0x35400011; S=0x35400065; 
@property(copy, nonatomic) NSString *source;	// G=0x354000a1; S=0x354000bd; 
@property(assign, nonatomic) int state;	// G=0x3540010d; S=0x35400135; 
+ (id)queueState;	// 0x353fff15
+ (id)queueStateWithDictionary:(id)dictionary context:(id)context;	// 0x353fff59
// declared property getter: - (id)applicationIdentifier;	// 0x353fffa5
- (id)encodedClassName;	// 0x353fff09
- (id)groupIdentifier;	// 0x353ffef9
// declared property getter: - (id)listeningToItem;	// 0x35400011
// declared property setter: - (void)setApplicationIdentifier:(id)identifier;	// 0x353fffc1
// declared property setter: - (void)setListeningToItem:(id)item;	// 0x35400065
// declared property setter: - (void)setSource:(id)source;	// 0x354000bd
// declared property setter: - (void)setState:(int)state;	// 0x35400135
// declared property getter: - (id)source;	// 0x354000a1
// declared property getter: - (int)state;	// 0x3540010d
@end

