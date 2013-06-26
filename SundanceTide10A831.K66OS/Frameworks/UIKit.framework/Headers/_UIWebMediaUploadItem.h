/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface _UIWebMediaUploadItem : NSObject {
	NSString *_filePath;	// 4 = 0x4
	UIImage *_originalImage;	// 8 = 0x8
	BOOL _video;	// 12 = 0xc
}
@property(retain, nonatomic) NSString *filePath;	// G=0x31fdb58d; S=0x31fdb59d; @synthesize=_filePath
@property(retain, nonatomic) UIImage *originalImage;	// G=0x31fdb5ad; S=0x31fdb5bd; @synthesize=_originalImage
@property(assign, nonatomic, getter=isVideo) BOOL video;	// G=0x31fdb5cd; S=0x31fdb5dd; @synthesize=_video
+ (id)mediaUploadItemWithFilePath:(id)filePath image:(id)image isVideo:(BOOL)video;	// 0x31fdb121
- (id)initWithFilePath:(id)filePath image:(id)image isVideo:(BOOL)video;	// 0x31fdb049
- (id)_imageForVideoFile:(id)videoFile;	// 0x31fdb2e9
- (CGRect)_squareCropRectForSize:(CGSize)size;	// 0x31fdb175
- (id)_squareImage:(id)image;	// 0x31fdb1ed
- (void)dealloc;	// 0x31fdb0c9
- (id)displayImage;	// 0x31fdb521
// declared property getter: - (id)filePath;	// 0x31fdb58d
// declared property getter: - (BOOL)isVideo;	// 0x31fdb5cd
// declared property getter: - (id)originalImage;	// 0x31fdb5ad
// declared property setter: - (void)setFilePath:(id)path;	// 0x31fdb59d
// declared property setter: - (void)setOriginalImage:(id)image;	// 0x31fdb5bd
// declared property setter: - (void)setVideo:(BOOL)video;	// 0x31fdb5dd
@end
