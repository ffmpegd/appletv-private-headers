/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import "NSURLConnectionDelegate.h"
#import <GEOTileRequester.h> // Unknown library

@class NSURLConnection, NSMutableData;

@interface GMMGeoTileRequester : GEOTileRequester <NSURLConnectionDelegate> {
	NSURLConnection *_conn;	// 28 = 0x1c
	NSMutableData *_data;	// 32 = 0x20
	BOOL _readPreamble;	// 36 = 0x24
	BOOL _readTileHeader;	// 37 = 0x25
	int _lastGoodOffset;	// 40 = 0x28
	unsigned short _numTilesToRead;	// 44 = 0x2c
	unsigned short _numTilesRead;	// 46 = 0x2e
	unsigned _tileEdition;	// 48 = 0x30
	unsigned _tilesLoaded;	// 52 = 0x34
}
+ (id)hostname;	// 0x30b83ae9
+ (unsigned char)tileProviderIdentifier;	// 0x30b83ae5
- (void)_cancelWithErrorCode:(int)errorCode;	// 0x30b845e5
- (void)_cleanup;	// 0x30b844a1
- (void)_failWithError:(id)error;	// 0x30b8452d
- (void)_failWithErrorCode:(int)errorCode;	// 0x30b84561
- (void)_tryReadPreamble;	// 0x30b846cd
- (void)_tryReadTiles;	// 0x30b84a25
- (void)cancel;	// 0x30b844f1
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x30b85031
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x30b84f29
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x30b84615
- (void)connectionDidFinishLoading:(id)connection;	// 0x30b84fa9
- (void)start;	// 0x30b83b05
@end

