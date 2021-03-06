/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _UIPreviewItemProxy : NSObject {
@private
	NSURL *_URL;	// 4 = 0x4
	NSURL *_previewURLOverride;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	NSURL *_URLToDeleteOnDealloc;	// 16 = 0x10
	NSString *_previewItemContentType;	// 20 = 0x14
}
@property(copy, nonatomic) NSURL *URLToDeleteOnDealloc;	// G=0x30398d59; S=0x30398d6d; @synthesize=_URLToDeleteOnDealloc
@property(copy, nonatomic) NSString *previewItemContentType;	// G=0x30398c4d; S=0x30398c09; 
@property(copy, nonatomic) NSString *previewItemTitle;	// G=0x30398d35; S=0x30398d49; @synthesize=_name
@property(copy, nonatomic) NSURL *previewItemURL;	// G=0x30398ced; S=0x30398d01; @synthesize=_URL
@property(copy, nonatomic) NSURL *previewItemURLOverride;	// G=0x30398d11; S=0x30398d25; @synthesize=_previewURLOverride
// declared property getter: - (id)URLToDeleteOnDealloc;	// 0x30398d59
- (id)_primitive_previewItemContentType;	// 0x30398ca9
- (void)dealloc;	// 0x30398b25
// declared property getter: - (id)previewItemContentType;	// 0x30398c4d
// declared property getter: - (id)previewItemTitle;	// 0x30398d35
// declared property getter: - (id)previewItemURL;	// 0x30398ced
- (id)previewItemURLForDisplay;	// 0x30398cb9
// declared property getter: - (id)previewItemURLOverride;	// 0x30398d11
// declared property setter: - (void)setPreviewItemContentType:(id)type;	// 0x30398c09
// declared property setter: - (void)setPreviewItemTitle:(id)title;	// 0x30398d49
// declared property setter: - (void)setPreviewItemURL:(id)url;	// 0x30398d01
// declared property setter: - (void)setPreviewItemURLOverride:(id)override;	// 0x30398d25
// declared property setter: - (void)setURLToDeleteOnDealloc:(id)deleteOnDealloc;	// 0x30398d6d
@end

