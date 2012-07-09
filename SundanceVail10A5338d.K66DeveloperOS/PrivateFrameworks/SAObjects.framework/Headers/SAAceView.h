/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADeferredKeyObject.h"
#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString, NSNumber;

@interface SAAceView : AceObject <SAAceSerializable, SADeferredKeyObject> {
}
@property(copy, nonatomic) NSNumber *listenAfterSpeaking;	// G=0x3796809d; S=0x379680b9; 
@property(copy, nonatomic) NSString *speakableText;	// G=0x37968109; S=0x37968125; 
@property(copy, nonatomic) NSString *viewId;	// G=0x37968175; S=0x37968191; 
+ (id)aceView;	// 0x3796800d
+ (id)aceViewWithDictionary:(id)dictionary context:(id)context;	// 0x37968051
- (id)deferredKeys;	// 0x379681e1
- (id)encodedClassName;	// 0x37968001
- (id)groupIdentifier;	// 0x37967ff1
// declared property getter: - (id)listenAfterSpeaking;	// 0x3796809d
// declared property setter: - (void)setListenAfterSpeaking:(id)speaking;	// 0x379680b9
// declared property setter: - (void)setSpeakableText:(id)text;	// 0x37968125
// declared property setter: - (void)setViewId:(id)anId;	// 0x37968191
// declared property getter: - (id)speakableText;	// 0x37968109
// declared property getter: - (id)viewId;	// 0x37968175
@end
