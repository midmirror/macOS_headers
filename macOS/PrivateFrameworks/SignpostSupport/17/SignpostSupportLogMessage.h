//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SignpostSupport/SignpostSupportObject.h>

#import <SignpostSupport/SignpostSupportLoggingSupportArchiveEvent-Protocol.h>

@class NSString, NSUUID;

@interface SignpostSupportLogMessage : SignpostSupportObject <SignpostSupportLoggingSupportArchiveEvent>
{
    unsigned char _messageType;
    int _tv_usec;
    int _tz_minuteswest;
    int _tz_dsttime;
    int _processID;
    long long _tv_sec;
    unsigned long long _processUniqueID;
    unsigned long long _threadID;
    NSUUID *_processImageUUID;
    NSString *_processImagePath;
    NSString *_processName;
    NSString *_message;
    unsigned long long __machContinuousTimestamp;
}

+ (id)serializationTypeNumber;
@property(nonatomic) unsigned long long _machContinuousTimestamp; // @synthesize _machContinuousTimestamp=__machContinuousTimestamp;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(retain, nonatomic) NSString *processImagePath; // @synthesize processImagePath=_processImagePath;
@property(retain, nonatomic) NSUUID *processImageUUID; // @synthesize processImageUUID=_processImageUUID;
@property(nonatomic) unsigned char messageType; // @synthesize messageType=_messageType;
@property(nonatomic) unsigned long long threadID; // @synthesize threadID=_threadID;
@property(nonatomic) unsigned long long processUniqueID; // @synthesize processUniqueID=_processUniqueID;
@property(nonatomic) int processID; // @synthesize processID=_processID;
@property(nonatomic) int tz_dsttime; // @synthesize tz_dsttime=_tz_dsttime;
@property(nonatomic) int tz_minuteswest; // @synthesize tz_minuteswest=_tz_minuteswest;
@property(nonatomic) int tv_usec; // @synthesize tv_usec=_tv_usec;
@property(nonatomic) long long tv_sec; // @synthesize tv_sec=_tv_sec;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)durationMachContinuousTime;
- (unsigned long long)endMachContinuousTime;
- (unsigned long long)startMachContinuousTime;
- (id)descriptionStringForColumn:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 timebaseRatio:(double)arg3 unixDate:(struct timeval *)arg4 unixTimeZone:(struct timezone *)arg5;
- (id)initWithDictionary:(id)arg1;
- (id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)arg1;
- (id)humanReadableType;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

