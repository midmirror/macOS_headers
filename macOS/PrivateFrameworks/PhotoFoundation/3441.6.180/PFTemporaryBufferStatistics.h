//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PFTemporaryBufferStatistics : NSObject
{
    int _recentCount;
    int _recentHitCount;
    int _retiredCount;
    int _retiredHitCount;
    int _newTemporaryBuffersCount;
    int _purgedCount;
    int _recycledCount;
    int _recycledPurgableCount;
    int _recycledPurgedCount;
    long long _recentBytes;
    long long _recentHitBytes;
    long long _retiredBytes;
    long long _retiredHitBytes;
    long long _newTemporaryBuffersBytes;
    long long _purgedBytes;
    long long _recycledBytes;
    long long _recycledPurgableBytes;
    long long _recycledPurgedBytes;
}

@property int recycledPurgedCount; // @synthesize recycledPurgedCount=_recycledPurgedCount;
@property long long recycledPurgedBytes; // @synthesize recycledPurgedBytes=_recycledPurgedBytes;
@property int recycledPurgableCount; // @synthesize recycledPurgableCount=_recycledPurgableCount;
@property long long recycledPurgableBytes; // @synthesize recycledPurgableBytes=_recycledPurgableBytes;
@property int recycledCount; // @synthesize recycledCount=_recycledCount;
@property long long recycledBytes; // @synthesize recycledBytes=_recycledBytes;
@property int purgedCount; // @synthesize purgedCount=_purgedCount;
@property long long purgedBytes; // @synthesize purgedBytes=_purgedBytes;
@property int newTemporaryBuffersCount; // @synthesize newTemporaryBuffersCount=_newTemporaryBuffersCount;
@property long long newTemporaryBuffersBytes; // @synthesize newTemporaryBuffersBytes=_newTemporaryBuffersBytes;
@property int retiredHitCount; // @synthesize retiredHitCount=_retiredHitCount;
@property long long retiredHitBytes; // @synthesize retiredHitBytes=_retiredHitBytes;
@property int retiredCount; // @synthesize retiredCount=_retiredCount;
@property long long retiredBytes; // @synthesize retiredBytes=_retiredBytes;
@property int recentHitCount; // @synthesize recentHitCount=_recentHitCount;
@property long long recentHitBytes; // @synthesize recentHitBytes=_recentHitBytes;
@property int recentCount; // @synthesize recentCount=_recentCount;
@property long long recentBytes; // @synthesize recentBytes=_recentBytes;

@end

