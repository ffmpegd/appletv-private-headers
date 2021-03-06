/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIViewController.h> // Unknown library
#import "MediaPlayer-Structs.h"
#import "UIScrollViewDelegate.h"
#import "MediaPickerModalContextDelegate.h"

@class NSString, MPMediaPickerControllerInternal;
@protocol MPMediaPickerControllerDelegate;

@interface MPMediaPickerController : UIViewController <MediaPickerModalContextDelegate, UIScrollViewDelegate> {
@private
	MPMediaPickerControllerInternal *_internal;	// 156 = 0x9c
}
@property(assign, nonatomic) BOOL allowsPickingMultipleItems;	// G=0x35b94355; S=0x35b94379; 
@property(assign, nonatomic) id<MPMediaPickerControllerDelegate> delegate;	// G=0x35b94295; S=0x35b94275; 
@property(readonly, assign, nonatomic) int mediaTypes;	// G=0x35b94255; 
@property(copy, nonatomic) NSString *prompt;	// G=0x35b94335; S=0x35b942b5; 
+ (void)preheatMediaPicker;	// 0x35b943e5
- (id)init;	// 0x35b93e09
- (id)initWithMediaTypes:(int)mediaTypes;	// 0x35b93e1d
- (void)_pickerDidCancel;	// 0x35b943f5
- (void)_pickerDidPickItems:(id)_picker;	// 0x35b944c9
// declared property getter: - (BOOL)allowsPickingMultipleItems;	// 0x35b94355
- (void)dealloc;	// 0x35b93ecd
// declared property getter: - (id)delegate;	// 0x35b94295
- (void)loadView;	// 0x35b93f31
- (void)mediaPickerModalContext:(id)context didPickMediaItems:(id)items;	// 0x35b94241
// declared property getter: - (int)mediaTypes;	// 0x35b94255
- (void)modalContextDidDismiss:(id)modalContext withSuccess:(BOOL)success;	// 0x35b94221
// declared property getter: - (id)prompt;	// 0x35b94335
// declared property setter: - (void)setAllowsPickingMultipleItems:(BOOL)items;	// 0x35b94379
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35b94275
// declared property setter: - (void)setPrompt:(id)prompt;	// 0x35b942b5
- (void)viewDidUnload;	// 0x35b941bd
@end

