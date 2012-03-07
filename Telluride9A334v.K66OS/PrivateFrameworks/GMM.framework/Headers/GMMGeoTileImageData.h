/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <NSObject.h> // Unknown library
#import "GMM-Structs.h"

@class NSArray, NSMutableArray, NSData;

@interface GMMGeoTileImageData : NSObject {
	NSData *_data;	// 4 = 0x4
	unsigned _imageOffset;	// 8 = 0x8
	BOOL _idiomIPad;	// 12 = 0xc
	BOOL _copyRightDataCreated;	// 13 = 0xd
	int _imageCopyrightYear;	// 16 = 0x10
	int _dataCopyrightYear;	// 20 = 0x14
	NSMutableArray *_imageCopyrights;	// 24 = 0x18
	NSMutableArray *_dataCopyrights;	// 28 = 0x1c
}
@property(readonly, assign) int dataCopyrightYear;	// G=0x35baa9c5; 
@property(readonly, assign) NSArray *dataCopyrights;	// G=0x35baa9fd; 
@property(readonly, assign) int imageCopyrightYear;	// G=0x35baa955; 
@property(readonly, assign) NSArray *imageCopyrights;	// G=0x35baa98d; 
+ (id)createWithData:(id)data runningOnIPad:(BOOL)pad idiomIPad:(BOOL)pad3;	// 0x35baa1f1
- (id)initWithData:(id)data runningOnIPad:(BOOL)pad idiomIPad:(BOOL)pad3;	// 0x35baa0f5
- (void)_createCopyrightData;	// 0x35baa43d
// declared property getter: - (int)dataCopyrightYear;	// 0x35baa9c5
// declared property getter: - (id)dataCopyrights;	// 0x35baa9fd
- (void)dealloc;	// 0x35baa245
// declared property getter: - (int)imageCopyrightYear;	// 0x35baa955
// declared property getter: - (id)imageCopyrights;	// 0x35baa98d
- (CGImageRef)newImage;	// 0x35baaa35
@end

