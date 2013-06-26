/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h> // Unknown library
#import "WebCore-Structs.h"

@class NSString, NSArray;

@interface WebEvent : NSObject {
	int _type;	// 4 = 0x4
	double _timestamp;	// 8 = 0x8
	CGPoint _locationInWindow;	// 16 = 0x10
	NSString *_characters;	// 24 = 0x18
	NSString *_charactersIgnoringModifiers;	// 28 = 0x1c
	unsigned _modifierFlags;	// 32 = 0x20
	BOOL _keyRepeating;	// 36 = 0x24
	BOOL _popupVariant;	// 37 = 0x25
	unsigned short _keyCode;	// 38 = 0x26
	BOOL _tabKey;	// 40 = 0x28
	int _characterSet;	// 44 = 0x2c
	float _deltaX;	// 48 = 0x30
	float _deltaY;	// 52 = 0x34
	unsigned _touchCount;	// 56 = 0x38
	NSArray *_touchLocations;	// 60 = 0x3c
	NSArray *_touchIdentifiers;	// 64 = 0x40
	NSArray *_touchPhases;	// 68 = 0x44
	BOOL _isGesture;	// 72 = 0x48
	float _gestureScale;	// 76 = 0x4c
	float _gestureRotation;	// 80 = 0x50
}
@property(readonly, assign, nonatomic) int characterSet;	// G=0x35efb401; 
@property(readonly, assign, nonatomic) NSString *characters;	// G=0x35ef99e9; 
@property(readonly, assign, nonatomic) NSString *charactersIgnoringModifiers;	// G=0x35ef9a21; 
@property(readonly, assign, nonatomic) float deltaX;	// G=0x36492151; 
@property(readonly, assign, nonatomic) float deltaY;	// G=0x36492161; 
@property(readonly, assign, nonatomic) float gestureRotation;	// G=0x35ef51c9; 
@property(readonly, assign, nonatomic) float gestureScale;	// G=0x35ef51b9; 
@property(readonly, assign, nonatomic) BOOL isGesture;	// G=0x35ef51d9; 
@property(readonly, assign, nonatomic) unsigned short keyCode;	// G=0x35ef9f11; 
@property(readonly, assign, nonatomic, getter=isKeyRepeating) BOOL keyRepeating;	// G=0x35ef9f21; 
@property(readonly, assign, nonatomic) CGPoint locationInWindow;	// G=0x35eea209; 
@property(readonly, assign, nonatomic) unsigned modifierFlags;	// G=0x35ef5199; 
@property(readonly, assign, nonatomic, getter=isPopupVariant) BOOL popupVariant;	// G=0x35efb721; 
@property(readonly, assign, nonatomic, getter=isTabKey) BOOL tabKey;	// G=0x35efb3f1; 
@property(readonly, assign, nonatomic) double timestamp;	// G=0x36492171; @synthesize=_timestamp
@property(readonly, assign, nonatomic) unsigned touchCount;	// G=0x35ef51a9; 
@property(readonly, assign, nonatomic) NSArray *touchIdentifiers;	// G=0x35ef51f9; 
@property(readonly, assign, nonatomic) NSArray *touchLocations;	// G=0x35ef51e9; 
@property(readonly, assign, nonatomic) NSArray *touchPhases;	// G=0x35ef5289; 
@property(readonly, assign, nonatomic) int type;	// G=0x35eea1f9; @synthesize=_type
- (id)initWithKeyEventType:(int)keyEventType timeStamp:(double)stamp characters:(id)characters charactersIgnoringModifiers:(id)modifiers modifiers:(unsigned)modifiers5 isRepeating:(BOOL)repeating isPopupVariant:(BOOL)variant keyCode:(unsigned short)code isTabKey:(BOOL)key characterSet:(int)set;	// 0x35ef8745
- (id)initWithMouseEventType:(int)mouseEventType timeStamp:(double)stamp location:(CGPoint)location;	// 0x35ee9ed1
- (id)initWithScrollWheelEventWithTimeStamp:(double)timeStamp location:(CGPoint)location deltaX:(float)x deltaY:(float)y;	// 0x36491755
- (id)initWithTouchEventType:(int)touchEventType timeStamp:(double)stamp location:(CGPoint)location modifiers:(unsigned)modifiers touchCount:(unsigned)count touchLocations:(id)locations touchIdentifiers:(id)identifiers touchPhases:(id)phases isGesture:(BOOL)gesture gestureScale:(float)scale gestureRotation:(float)rotation;	// 0x35ef49f1
- (id).cxx_construct;	// 0x35ee9ec9
- (id)_characterSetDescription;	// 0x36491945
- (id)_eventDescription;	// 0x36491de1
- (id)_modiferFlagsDescription;	// 0x364918a1
- (id)_touchIdentifiersDescription;	// 0x36491b21
- (id)_touchLocationsDescription:(id)description;	// 0x364919b9
- (id)_touchPhaseDescription:(int)description;	// 0x36491c4d
- (id)_touchPhasesDescription;	// 0x36491ca1
- (id)_typeDescription;	// 0x364917fd
// declared property getter: - (int)characterSet;	// 0x35efb401
// declared property getter: - (id)characters;	// 0x35ef99e9
// declared property getter: - (id)charactersIgnoringModifiers;	// 0x35ef9a21
- (void)dealloc;	// 0x35eeaa6d
// declared property getter: - (float)deltaX;	// 0x36492151
// declared property getter: - (float)deltaY;	// 0x36492161
- (id)description;	// 0x364920c1
// declared property getter: - (float)gestureRotation;	// 0x35ef51c9
// declared property getter: - (float)gestureScale;	// 0x35ef51b9
// declared property getter: - (BOOL)isGesture;	// 0x35ef51d9
// declared property getter: - (BOOL)isKeyRepeating;	// 0x35ef9f21
// declared property getter: - (BOOL)isPopupVariant;	// 0x35efb721
// declared property getter: - (BOOL)isTabKey;	// 0x35efb3f1
// declared property getter: - (unsigned short)keyCode;	// 0x35ef9f11
// declared property getter: - (CGPoint)locationInWindow;	// 0x35eea209
// declared property getter: - (unsigned)modifierFlags;	// 0x35ef5199
// declared property getter: - (double)timestamp;	// 0x36492171
// declared property getter: - (unsigned)touchCount;	// 0x35ef51a9
// declared property getter: - (id)touchIdentifiers;	// 0x35ef51f9
// declared property getter: - (id)touchLocations;	// 0x35ef51e9
// declared property getter: - (id)touchPhases;	// 0x35ef5289
// declared property getter: - (int)type;	// 0x35eea1f9
@end
