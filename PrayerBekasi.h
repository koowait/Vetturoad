#ifndef PRAYER_BEKASI_H
#define PRAYER_BEKASI_H

#include <Arduino.h>

struct PrayerTime {
  const char* imsak;
  const char* subuh;
  const char* terbit;
  const char* dhuha;
  const char* dzuhur;
  const char* ashar;
  const char* maghrib;
  const char* isya;
};

class PrayerBekasi {
public:
  PrayerBekasi();
  const PrayerTime& getPrayerTimes(int dayOfYear) const;
  int getDayOfYear(int year, int month, int day) const;

private:
  static const PrayerTime prayerTimes[365];
};

#endif // PRAYER_BEKASI_H