//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCloudKitMirroringDelegateMetadata, NSCloudKitMirroringImportRequest, PFCloudKitImporterOptions;

__attribute__((visibility("hidden")))
@interface PFCloudKitImporterWorkItem : NSObject
{
    PFCloudKitImporterOptions *_options;
    NSCloudKitMirroringDelegateMetadata *_metadata;
    NSCloudKitMirroringImportRequest *_request;
}

@property(readonly, nonatomic) NSCloudKitMirroringImportRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) NSCloudKitMirroringDelegateMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) PFCloudKitImporterOptions *options; // @synthesize options=_options;
- (void)doWorkWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 metadata:(id)arg2 request:(id)arg3;

@end

