/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "UIScrollViewDelegate.h"
#import <UIViewController.h> // Unknown library
#import "MediaPlayer-Structs.h"
#import "MediaPickerModalContextDelegate.h"

@class NSString, MPMediaPickerControllerInternal;
@protocol MPMediaPickerControllerDelegate;

@interface MPMediaPickerController : UIViewController <MediaPickerModalContextDelegate, UIScrollViewDelegate> {
	MPMediaPickerControllerInternal *_internal;	// 196 = 0xc4
}
@property(assign, nonatomic) BOOL allowsPickingMultipleItems;	// G=0x31d16b29; S=0x31d16b4d; 
@property(assign, nonatomic) id<MPMediaPickerControllerDelegate> delegate;	// G=0x31d16a79; S=0x31d16a59; 
@property(readonly, assign, nonatomic) int mediaTypes;	// G=0x31d16a39; 
@property(copy, nonatomic) NSString *prompt;	// G=0x31d16b09; S=0x31d16a99; 
@property(assign, nonatomic) BOOL showsCloudItems;	// G=0x31d16bbd; S=0x31d16be1; 
+ (void)preheatMediaPicker;	// 0x31d16c55
- (id)init;	// 0x31d16441
- (id)initWithMediaTypes:(int)mediaTypes;	// 0x31d16455
- (void)_pickerDidCancel;	// 0x31d16c65
- (void)_pickerDidPickItems:(id)_picker;	// 0x31d16d4d
// declared property getter: - (BOOL)allowsPickingMultipleItems;	// 0x31d16b29
- (void)dealloc;	// 0x31d1651d
// declared property getter: - (id)delegate;	// 0x31d16a79
- (void)loadView;	// 0x31d16581
- (void)mediaPickerModalContext:(id)context didPickMediaItems:(id)items;	// 0x31d16a25
// declared property getter: - (int)mediaTypes;	// 0x31d16a39
- (void)modalContextDidDismiss:(id)modalContext withSuccess:(BOOL)success;	// 0x31d16a0d
// declared property getter: - (id)prompt;	// 0x31d16b09
// declared property setter: - (void)setAllowsPickingMultipleItems:(BOOL)items;	// 0x31d16b4d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31d16a59
// declared property setter: - (void)setPrompt:(id)prompt;	// 0x31d16a99
// declared property setter: - (void)setShowsCloudItems:(BOOL)items;	// 0x31d16be1
// declared property getter: - (BOOL)showsCloudItems;	// 0x31d16bbd
- (void)viewWillAppear:(BOOL)view;	// 0x31d16825
- (void)viewWillDisappear:(BOOL)view;	// 0x31d168fd
@end

