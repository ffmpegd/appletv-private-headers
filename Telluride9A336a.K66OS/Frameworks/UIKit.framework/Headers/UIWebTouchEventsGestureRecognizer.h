/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizer.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIWebTouchEventsGestureRecognizer : UIGestureRecognizer {
@private
	id _touchTarget;	// 56 = 0x38
	SEL _touchAction;	// 60 = 0x3c
	unsigned _passedHitTest : 1;	// 64 = 0x40
	unsigned _defaultPrevented : 1;	// 64 = 0x40
	unsigned _inJavaScriptGesture : 1;	// 64 = 0x40
	float _originalGestureDistance;	// 68 = 0x44
	float _originalGestureAngle;	// 72 = 0x48
	int _type;	// 76 = 0x4c
	CGPoint _locationInWindow;	// 80 = 0x50
	NSMutableArray *_touchLocations;	// 88 = 0x58
	NSMutableArray *_touchIdentifiers;	// 92 = 0x5c
	NSMutableArray *_touchPhases;	// 96 = 0x60
	float _scale;	// 100 = 0x64
	float _rotation;	// 104 = 0x68
}
@property(assign, nonatomic, getter=isDefaultPrevented) BOOL defaultPrevented;	// G=0x353deb49; S=0x353deb61; @synthesize=_defaultPrevented
@property(readonly, assign, nonatomic) BOOL inJavaScriptGesture;	// G=0x35208589; @synthesize=_inJavaScriptGesture
@property(readonly, assign, nonatomic) CGPoint locationInWindow;	// G=0x3520854d; @synthesize=_locationInWindow
@property(readonly, assign, nonatomic) float rotation;	// G=0x352085b1; @synthesize=_rotation
@property(readonly, assign, nonatomic) float scale;	// G=0x352085a1; @synthesize=_scale
@property(retain, nonatomic) NSMutableArray *touchIdentifiers;	// G=0x35208569; S=0x3515eed9; @synthesize=_touchIdentifiers
@property(retain, nonatomic) NSMutableArray *touchLocations;	// G=0x35208505; S=0x3515eeb5; @synthesize=_touchLocations
@property(retain, nonatomic) NSMutableArray *touchPhases;	// G=0x35208579; S=0x3515eefd; @synthesize=_touchPhases
@property(readonly, assign, nonatomic) int type;	// G=0x35208515; @synthesize=_type
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x3515ec61
- (unsigned)_getNextTouchIdentifier;	// 0x352082a5
- (BOOL)_hitTestTouches:(id)touches;	// 0x352079ed
- (id)_identifiersDescription;	// 0x353de755
- (id)_locationsDescription;	// 0x353de5fd
- (id)_phaseDescription:(int)description;	// 0x353de861
- (id)_phasesDescription;	// 0x353de8b5
- (void)_processTouches:(id)touches withEvent:(id)event type:(int)type;	// 0x35207ca1
- (void)_recordTouches:(id)touches type:(int)type;	// 0x35207e69
- (void)_reset;	// 0x3520c7ed
- (void)_resetGestureRecognizer;	// 0x3520c7ad
- (id)_typeDescription;	// 0x353de5a5
- (BOOL)canBePreventedByGestureRecognizer:(id)recognizer;	// 0x35209d51
- (void)dealloc;	// 0x3525edc9
- (id)description;	// 0x353de9d5
// declared property getter: - (BOOL)inJavaScriptGesture;	// 0x35208589
// declared property getter: - (BOOL)isDefaultPrevented;	// 0x353deb49
// declared property getter: - (CGPoint)locationInWindow;	// 0x3520854d
// declared property getter: - (float)rotation;	// 0x352085b1
// declared property getter: - (float)scale;	// 0x352085a1
// declared property setter: - (void)setDefaultPrevented:(BOOL)prevented;	// 0x353deb61
// declared property setter: - (void)setTouchIdentifiers:(id)identifiers;	// 0x3515eed9
// declared property setter: - (void)setTouchLocations:(id)locations;	// 0x3515eeb5
// declared property setter: - (void)setTouchPhases:(id)phases;	// 0x3515eefd
// declared property getter: - (id)touchIdentifiers;	// 0x35208569
// declared property getter: - (id)touchLocations;	// 0x35208505
// declared property getter: - (id)touchPhases;	// 0x35208579
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x35207955
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x353deb0d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3520c771
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3520a1e5
// declared property getter: - (int)type;	// 0x35208515
@end

