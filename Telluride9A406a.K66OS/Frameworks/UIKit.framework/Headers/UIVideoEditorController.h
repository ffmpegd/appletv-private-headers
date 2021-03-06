/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UINavigationController.h"

@class NSString, NSMutableDictionary;
@protocol UINavigationControllerDelegate, UIVideoEditorControllerDelegate;

@interface UIVideoEditorController : UINavigationController {
@private
	int _previousStatusBarStyle;	// 240 = 0xf0
	NSMutableDictionary *_properties;	// 244 = 0xf4
	struct {
		unsigned visible : 1;
		unsigned isCleaningUp : 1;
		unsigned didRevertStatusBar : 1;
	} _flags;	// 248 = 0xf8
}
@property(assign, nonatomic) id<UINavigationControllerDelegate, UIVideoEditorControllerDelegate> delegate;	// @dynamic
@property(assign, nonatomic) double videoMaximumDuration;	// G=0x35963d4d; S=0x35963d85; 
@property(copy, nonatomic) NSString *videoPath;	// G=0x35963d15; S=0x35963d31; 
@property(assign, nonatomic) unsigned videoQuality;	// G=0x35963dcd; S=0x35963e05; 
+ (BOOL)canEditVideoAtPath:(id)path;	// 0x359635e5
- (id)init;	// 0x35963615
- (void)_autoDismiss;	// 0x35963b65
- (id)_createInitialController;	// 0x35963a79
- (BOOL)_didRevertStatusBar;	// 0x359639bd
- (void)_initializeProperties;	// 0x35963ead
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x359639d1
- (id)_properties;	// 0x35963f91
- (void)_removeAllChildren;	// 0x359639dd
- (void)_setProperties:(id)properties;	// 0x35963e4d
- (void)_setValue:(id)value forProperty:(id)property;	// 0x35963fe1
- (void)_setupControllers;	// 0x35963ae1
- (id)_valueForProperty:(id)property;	// 0x35964049
- (void)editVideoViewController:(id)controller didFailWithError:(id)error;	// 0x35963ca5
- (void)editVideoViewController:(id)controller didTrimVideoWithOptions:(id)options;	// 0x35963bf1
- (void)editVideoViewControllerDidCancel:(id)editVideoViewController;	// 0x35963b91
// declared property setter: - (void)setVideoMaximumDuration:(double)duration;	// 0x35963d85
// declared property setter: - (void)setVideoPath:(id)path;	// 0x35963d31
// declared property setter: - (void)setVideoQuality:(unsigned)quality;	// 0x35963e05
// declared property getter: - (double)videoMaximumDuration;	// 0x35963d4d
// declared property getter: - (id)videoPath;	// 0x35963d15
// declared property getter: - (unsigned)videoQuality;	// 0x35963dcd
- (void)viewDidDisappear:(BOOL)view;	// 0x35963929
- (void)viewWillAppear:(BOOL)view;	// 0x359636f5
- (void)viewWillDisappear:(BOOL)view;	// 0x359637b5
- (void)viewWillUnload;	// 0x35963679
@end

