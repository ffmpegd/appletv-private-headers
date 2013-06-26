/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSData.h> // Unknown library

@class NSString;

@interface _PFExternalReferenceData : NSData {
	NSData *_originalData;	// 4 = 0x4
	void *_bytesPtrForStore;	// 8 = 0x8
	unsigned _bytesLengthForStore;	// 12 = 0xc
	void *_bytesPtrForExternalReference;	// 16 = 0x10
	unsigned _bytesLengthForExternalReference;	// 20 = 0x14
	NSString *_externalReferenceLocation;	// 24 = 0x18
	NSString *_safeguardLocation;	// 28 = 0x1c
	id _ubiquitousLocation;	// 32 = 0x20
	externalDataFlags _externalDataFlags;	// 36 = 0x24
}
+ (BOOL)_releaseReservedMapFileDescriptor;	// 0x30f87b89
+ (BOOL)_reserveMapFileDescriptor;	// 0x30f87b71
+ (BOOL)_updateFileDescriptorsInUseReserveNew:(BOOL)useReserveNew;	// 0x30f87b29
- (id)initForExternalLocation:(id)externalLocation safeguardLocation:(id)location data:(id)data protectionLevel:(int)level;	// 0x30f87f2d
- (id)initForUbiquityDictionary:(id)ubiquityDictionary store:(id)store;	// 0x30f87be1
- (id)initWithStoreBytes:(const void *)storeBytes length:(unsigned)length externalLocation:(id)location safeguardLocation:(id)location4 protectionLevel:(int)level;	// 0x30f88161
- (id)initWithStoreBytes:(const void *)storeBytes length:(unsigned)length externalLocation:(id)location safeguardLocation:(id)location4 protectionLevel:(int)level ubiquitousLocation:(id)location6;	// 0x30f883a9
- (id)UUID;	// 0x30f893f5
- (BOOL)_attemptToMapData:(id *)mapData;	// 0x30f887ad
- (unsigned)_bytesLengthForExternalReference;	// 0x30f892c5
- (unsigned)_bytesLengthForStore;	// 0x30f892a5
- (const void *)_bytesPtrForExternalReference;	// 0x30f892b5
- (const void *)_bytesPtrForStore;	// 0x30f89295
- (void)_deleteExternalReferenceFromPermanentLocation;	// 0x30f8918d
- (void)_doCleanup;	// 0x30f88535
- (id)_exceptionForReadError:(id)readError;	// 0x30f88cb5
- (const char *)_externalReferenceLocation;	// 0x30f892d5
- (id)_externalReferenceLocationString;	// 0x30f892f5
- (BOOL)_isEqualHelper:(id)helper;	// 0x30f89811
- (void)_moveExternalReferenceToPermanentLocation;	// 0x30f89069
- (id)_originalData;	// 0x30f8878d
- (const void *)_retrieveExternalData;	// 0x30f88ed5
- (const char *)_safeguardLocation;	// 0x30f89305
- (id)_safeguardLocationString;	// 0x30f89325
- (void)_setBytesForExternalReference:(const void *)externalReference;	// 0x30f8879d
- (void)_writeExternalReferenceToInterimLocation;	// 0x30f89031
- (const void *)bytes;	// 0x30f89275
- (Class)classForArchiver;	// 0x30f88629
- (Class)classForCoder;	// 0x30f8860d
- (id)constructSafeguardStringFromString:(id)string;	// 0x30f87ba1
- (id)copy;	// 0x30f88721
- (id)databaseValue;	// 0x30f893b9
- (void)dealloc;	// 0x30f88645
- (id)description;	// 0x30f891d5
- (void)doCleanupOnDealloc;	// 0x30f89415
- (id)externalReferenceLocationString;	// 0x30f89371
- (id)filename;	// 0x30f893a9
- (void)finalize;	// 0x30f886e1
- (void)getBytes:(void *)bytes length:(unsigned)length;	// 0x30f8942d
- (void)getBytes:(void *)bytes range:(NSRange)range;	// 0x30f8944d
- (BOOL)hasExternalReferenceContent;	// 0x30f891c1
- (BOOL)isEqual:(id)equal;	// 0x30f89995
- (BOOL)isEqualToData:(id)data;	// 0x30f899d9
- (unsigned)length;	// 0x30f89285
- (id)mutableCopy;	// 0x30f88731
- (int)preferredProtectionLevel;	// 0x30f8935d
- (id)subdataWithRange:(NSRange)range;	// 0x30f8965d
@end
