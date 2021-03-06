/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "NSURLConnectionDelegate.h"
#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSURL, NSURLConnection, GEOTileKeyList, GEONetworkDataReader, NSString;
@protocol GEOVoltaireTileDownloaderDelegate;

__attribute__((visibility("hidden")))
@interface GEOVoltaireTileDownloader : NSObject <NSURLConnectionDelegate> {
	GEOTileKeyList *_keyList;	// 4 = 0x4
	NSURL *_requestURL;	// 8 = 0x8
	int _zAdjust;	// 12 = 0xc
	NSURLConnection *_connection;	// 16 = 0x10
	GEONetworkDataReader *_reader;	// 20 = 0x14
	int _numTilesLoaded;	// 24 = 0x18
	NSString *_sharedPrefix;	// 28 = 0x1c
	NSString *_userAgent;	// 32 = 0x20
	id<GEOVoltaireTileDownloaderDelegate> _delegate;	// 36 = 0x24
	unsigned short _providerID;	// 40 = 0x28
}
@property(assign, nonatomic) id<GEOVoltaireTileDownloaderDelegate> delegate;	// G=0x3671c31d; S=0x3671c32d; @synthesize=_delegate
@property(retain, nonatomic) NSString *userAgent;	// G=0x3671c33d; S=0x3671c34d; @synthesize=_userAgent
- (id)initWithURL:(id)url;	// 0x3671b2c1
- (void)_cancelWithErrorCode:(int)errorCode;	// 0x3671b985
- (void)_cleanupConnection;	// 0x3671b865
- (void)_failWithError:(id)error;	// 0x3671b8dd
- (void)_failWithErrorCode:(int)errorCode;	// 0x3671b911
- (GEOTileKey)_tileKeyForURL:(id)url edition:(unsigned *)edition;	// 0x3671bbe9
- (void)_tryParseTiles;	// 0x3671bf29
- (id)_urlForTileKey:(GEOTileKey *)tileKey;	// 0x3671b9dd
- (void)addTileKey:(GEOTileKey *)key;	// 0x3671b3d1
- (void)cancel;	// 0x3671b829
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x3671c2c5
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x3671c1a9
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x3671c0d5
- (void)connectionDidFinishLoading:(id)connection;	// 0x3671c21d
- (void)dealloc;	// 0x3671b349
// declared property getter: - (id)delegate;	// 0x3671c31d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3671c32d
// declared property setter: - (void)setUserAgent:(id)agent;	// 0x3671c34d
- (void)start;	// 0x3671b425
// declared property getter: - (id)userAgent;	// 0x3671c33d
@end

