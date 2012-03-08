/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library
#import "MIME-Structs.h"

@class NSData, NSMutableDictionary, NSString, MFWeakReferenceHolder, MFPartialNetworkData;

@interface MimePart : NSObject {
	NSString *_type;	// 4 = 0x4
	NSString *_subtype;	// 8 = 0x8
	NSMutableDictionary *_bodyParameters;	// 12 = 0xc
	NSString *_contentTransferEncoding;	// 16 = 0x10
	NSMutableDictionary *_otherIvars;	// 20 = 0x14
	NSRange _range;	// 24 = 0x18
	MFWeakReferenceHolder *_parent;	// 32 = 0x20
	MFWeakReferenceHolder *_body;	// 36 = 0x24
	MimePart *_nextPart;	// 40 = 0x28
	MFPartialNetworkData *_partialData;	// 44 = 0x2c
	NSData *_fullData;	// 48 = 0x30
	MFWeakReferenceHolder *_decodedData;	// 52 = 0x34
}
@property(retain) id contentDescription;	// G=0x325a1025; S=0x325a3b81; converted property
@property(retain) id contentID;	// G=0x325a1055; S=0x325a3ba9; converted property
@property(retain) id contentLocation;	// G=0x325a1085; S=0x325a3bd1; converted property
@property(retain) NSString *contentTransferEncoding;	// G=0x325a0a11; S=0x325a6041; converted property
@property(retain) id disposition;	// G=0x325a0ef9; S=0x325a6009; converted property
@property(retain) id languages;	// G=0x325a10b5; S=0x325a3bf9; converted property
@property(retain) id mimeBody;	// G=0x325a1305; S=0x325a13c5; converted property
@property(assign) NSRange range;	// G=0x325a0a7d; S=0x325a0a99; converted property
@property(retain) id subparts;	// G=0x325a11a1; S=0x325a3c21; converted property
@property(retain) NSString *subtype;	// G=0x325a0de1; S=0x325a60c1; converted property
@property(retain) NSString *type;	// G=0x325a09f1; S=0x325a60dd; converted property
+ (Class)attachmentClass;	// 0x325a3439
+ (void)initialize;	// 0x325a42a5
+ (BOOL)isRecognizedClassForContent:(id)content;	// 0x325a3455
+ (BOOL)parseContentTypeHeader:(id)header type:(id *)type subtype:(id *)subtype;	// 0x325a3415
+ (BOOL)parseContentTypeHeader:(id)header type:(id *)type subtype:(id *)subtype info:(id *)info;	// 0x325a4155
- (id)init;	// 0x325a60f9
- (void)_contents:(id *)contents toOffset:(unsigned)offset resultOffset:(unsigned *)offset3 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html isComplete:(BOOL *)complete;	// 0x325a7311
- (void)_ensureBodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary isComplete:(BOOL *)complete decoded:(id *)decoded;	// 0x325a4b8d
- (id)_fullMimeTypeEvenInsideAppleDouble;	// 0x325a3541
- (BOOL)_hasCompleteBodyDataToOffset:(unsigned)offset;	// 0x325a547d
- (id)_partThatIsAttachment;	// 0x325a1f25
- (void)_setDecryptedMessageBody:(id)body isEncrypted:(BOOL)encrypted isSigned:(BOOL)aSigned;	// 0x325a3edd
- (void)_setRFC822DecodedMessageBody:(id)body;	// 0x325a3ebd
- (BOOL)_shouldContinueDecodingProcess;	// 0x325a0ab1
- (void)addSubpart:(id)subpart;	// 0x325a3d81
- (id)alternativeAtIndex:(int)index;	// 0x325a277d
- (unsigned)approximateRawSize;	// 0x325a1e69
- (id)attachmentFilename;	// 0x325a5bc5
- (id)attachments;	// 0x325a3261
- (id)bodyData;	// 0x325a3971
- (id)bodyDataForcingDownload:(BOOL)download;	// 0x325a4b51
- (id)bodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2;	// 0x325a393d
- (id)bodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary;	// 0x325a2e15
- (id)bodyParameterForKey:(id)key;	// 0x325a0e71
- (id)bodyParameterKeys;	// 0x325a0eb5
- (id)chosenAlternativePart;	// 0x325a32bd
- (void)clearCachedDescryptedMessageBody;	// 0x325a5759
- (void)configureFileWrapper:(id)wrapper;	// 0x325a558d
// converted property getter: - (id)contentDescription;	// 0x325a1025
// converted property getter: - (id)contentID;	// 0x325a1055
// converted property getter: - (id)contentLocation;	// 0x325a1085
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 asHTML:(BOOL)html;	// 0x325a2ed9
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html;	// 0x325a2f01
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html isComplete:(BOOL *)complete;	// 0x325a44f9
// converted property getter: - (id)contentTransferEncoding;	// 0x325a0a11
- (id)contentsForTextSystem;	// 0x325a3929
- (id)contentsForTextSystemForcingDownload:(BOOL)textSystemForcingDownload;	// 0x325a3905
- (id)contentsForTextSystemToOffset:(unsigned)offset resultOffset:(unsigned *)offset2;	// 0x325a38e1
- (id)contentsForTextSystemToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary;	// 0x325a38bd
- (id)contentsForTextSystemToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html;	// 0x325a3891
- (id)contentsForTextSystemToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html isComplete:(BOOL *)complete;	// 0x325a380d
- (id)copyBodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2;	// 0x325a2dcd
- (id)copyBodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary;	// 0x325a2df1
- (id)copyBodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary isComplete:(BOOL *)complete;	// 0x325a2d89
- (void)dealloc;	// 0x325a4035
- (id)decodeApplicationOctet_stream;	// 0x325b3695
- (id)decodeApplicationZip;	// 0x325b3691
- (void)decodeIfNecessary;	// 0x325a3985
- (id)decodeMultipart;	// 0x325b36e9
- (id)decodeMultipartAlternative;	// 0x325b36c1
- (id)decodeMultipartRelated;	// 0x325b3699
- (id)decodeText;	// 0x325a7c8d
- (id)decodedDataForData:(id)data;	// 0x325a5e15
- (id)decryptedMessageBodyIsEncrypted:(BOOL *)encrypted isSigned:(BOOL *)aSigned;	// 0x325a2a65
- (id)description;	// 0x325a1b6d
// converted property getter: - (id)disposition;	// 0x325a0ef9
- (id)dispositionParameterForKey:(id)key;	// 0x325a0f29
- (id)dispositionParameterKeys;	// 0x325a0fe5
- (void)download;	// 0x325a2c05
- (id)fileWrapper;	// 0x325a2d75
- (id)fileWrapperForDecodedObject:(id)decodedObject withFileData:(id *)fileData;	// 0x325a2b15
- (id)fileWrapperForcingDownload:(BOOL)download;	// 0x325a2c31
- (id)firstChildPart;	// 0x325a0a21
- (void)getNumberOfAttachments:(unsigned *)attachments isSigned:(BOOL *)aSigned isEncrypted:(BOOL *)encrypted;	// 0x325a31c9
- (BOOL)hasContents;	// 0x325a3845
- (BOOL)isAttachment;	// 0x325a200d
- (BOOL)isHTML;	// 0x325a2325
- (BOOL)isReadableText;	// 0x325a1e6d
- (BOOL)isRich;	// 0x325a21e1
// converted property getter: - (id)languages;	// 0x325a10b5
// converted property getter: - (id)mimeBody;	// 0x325a1305
- (id)nextSiblingPart;	// 0x325a111d
- (int)numberOfAlternatives;	// 0x325a2625
- (unsigned)numberOfAttachments;	// 0x325a2f2d
- (id)parentPart;	// 0x325a10e5
- (BOOL)parseIMAPPropertyList:(id)list;	// 0x325a7f31
- (BOOL)parseMimeBody;	// 0x325a95fd
- (id)partNumber;	// 0x325a7109
- (id)preservedHeaderValueForKey:(id)key;	// 0x325a0ed5
// converted property getter: - (NSRange)range;	// 0x325a0a7d
- (id)rfc822DecodedMessageBody;	// 0x325a24b1
- (void)setBodyParameter:(id)parameter forKey:(id)key;	// 0x325a605d
// converted property setter: - (void)setContentDescription:(id)description;	// 0x325a3b81
// converted property setter: - (void)setContentID:(id)anId;	// 0x325a3ba9
// converted property setter: - (void)setContentLocation:(id)location;	// 0x325a3bd1
// converted property setter: - (void)setContentTransferEncoding:(id)encoding;	// 0x325a6041
// converted property setter: - (void)setDisposition:(id)disposition;	// 0x325a6009
- (void)setDispositionParameter:(id)parameter forKey:(id)key;	// 0x325a5f7d
// converted property setter: - (void)setLanguages:(id)languages;	// 0x325a3bf9
// converted property setter: - (void)setMimeBody:(id)body;	// 0x325a13c5
// converted property setter: - (void)setRange:(NSRange)range;	// 0x325a0a99
// converted property setter: - (void)setSubparts:(id)subparts;	// 0x325a3c21
// converted property setter: - (void)setSubtype:(id)subtype;	// 0x325a60c1
// converted property setter: - (void)setType:(id)type;	// 0x325a60dd
- (BOOL)shouldConsiderInlineOverridingExchangeServer;	// 0x325a5a4d
- (id)signedData;	// 0x325a294d
- (id)startPart;	// 0x325a24d9
- (void)storeData:(id)data inMessage:(id)message isComplete:(BOOL)complete;	// 0x325a0aad
- (id)subpartAtIndex:(int)index;	// 0x325a125d
// converted property getter: - (id)subparts;	// 0x325a11a1
// converted property getter: - (id)subtype;	// 0x325a0de1
- (unsigned long)textEncoding;	// 0x325a5b85
- (id)textHtmlPart;	// 0x325a29a5
- (unsigned)totalTextSize;	// 0x325a57e9
// converted property getter: - (id)type;	// 0x325a09f1
- (BOOL)usesKnownSignatureProtocol;	// 0x325a594d
@end
