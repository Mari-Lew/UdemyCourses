#include <vector>
#include <ctime>
#include <string>
#include <optional>
#include <math.h>
#include <tuple>

using namespace std;

/*******************
* Basic structures *
*******************/

struct Date
{
  int year, month, day;

  Date(int year, int month, int day) : year(year), month(month), day(day) {}

  bool operator <=(const Date &rhs) const
  {
    struct tm rhs_date = {0, 0, 0, rhs.day, rhs.month - 1, rhs.year - 1900, 0, 0, 0, 0, ""};
    struct tm lhs_date = {0, 0, 0, day, month - 1, year - 1900, 0, 0, 0, 0, ""};
    auto rhs_time = mktime(&rhs_date);
    auto lhs_time = mktime(&lhs_date);
    return lhs_time <= rhs_time;
  }

  bool operator >=(const Date &rhs) const
  {
    struct tm rhs_date = {0, 0, 0, rhs.day, rhs.month - 1, rhs.year - 1900, 0, 0, 0, 0, ""};
    struct tm lhs_date = {0, 0, 0, day, month - 1, year - 1900, 0, 0, 0, 0, ""};
    auto rhs_time = mktime(&rhs_date);
    auto lhs_time = mktime(&lhs_date);
    return lhs_time >= rhs_time;
  }
};

struct Subscription
{
  int id;
  int customer_id;
  int monthly_price_in_cents;

  Subscription(int id, int customer_id, int monthly_price_in_cents)
  {
    this->id = id;
    this->customer_id = customer_id;
    this->monthly_price_in_cents = monthly_price_in_cents;
  }
};

struct User
{
  int id;
  string name;
  Date activated_on;
  optional<Date> deactivated_on;
  int customer_id;

  User(int id, string name, Date activated_on, optional<Date> deactivated_on, int customer_id)
    : activated_on(activated_on)
  {
    this->id = id;
    this->name = name;
    this->deactivated_on = deactivated_on;
    this->customer_id = customer_id;
  }
};

/*******************
* Helper functions *
*******************/

/**
 * Takes a Date struct and returns a Date struct
 * which is the first day of that month. For example:
 *
 *  auto new_date = first_day_of_month(Date(2022, 3, 17)) // Mar 17
 *   => Date(2022, 3, 1)                                  // Mar 1
 */
Date first_day_of_month(Date date)
{
  return Date(date.year, date.month, 1);
}

/**
 * Takes a Date struct and returns a Date struct which is the
 * last day of that month. For example:
 *
 *  auto new_date = first_day_of_month(Date(2022, 3, 17)) // Mar 17
 *   => Date(2022, 3, 31)                                 // Mar 31
 */
Date last_day_of_month(Date date)
{
  struct tm time;
  time.tm_year = date.year - 1900;
  time.tm_mon = date.month;
  time.tm_mday = 0;
  time.tm_hour = 0;
  time.tm_min = 0;
  time.tm_sec = 0;
  mktime(&time);

  // last day of the month depends on the year and the month
  return Date(date.year, date.month, time.tm_mday);
}

/**
 * Takes a Date struct and returns a Date struct which is the next day.
 * For example:
 *
 *  auto new_date = next_day(Date(2022, 3, 17))  // Mar 17
 *   => Date(2022, 3, 18)                        // Mar 18
 *
 *  auto new_date = next_day(Date(2022, 3, 31))  // Mar 31
 *   => Date(2022, 4, 1)                         // Apr 1
 */
Date next_day(Date date)
{
  struct tm time;
  time.tm_year = date.year - 1900;
  time.tm_mon = date.month - 1;
  time.tm_mday = date.day + 1;
  time.tm_hour = 0;
  time.tm_min = 0;
  time.tm_sec = 0;
  mktime(&time);

  // next day depends on the year and the month
  return Date(time.tm_year + 1900, time.tm_mon + 1, time.tm_mday);
}

/*********************
* Business functions *
*********************/

/**
 * Computes the monthly charge for a given subscription.
 *
 * @return The total monthly bill for the customer in cents, rounded
 * to the nearest cent. For example, a bill of $20.00 should return 2000.
 * If there are no active users or the subscription is null, returns 0.
 *
 * @param month - Always present
 *   Has the following structure:
 *   "2022-04"  // April 2022 in YYYY-MM format
 *
 * @param subscription - May be null
 *   If present, has the following structure (see Subscription struct):
 *   {
 *     id: 763,
 *     customer_id: 328,
 *     monthly_price_in_cents: 359  // price per active user per month
 *   }
 *
 * @param users - May be empty, but not null
 *   Has the following structure (see User struct):
 *   {
 *     {
 *       id: 1,
 *       name: "Employee #1",
 *       customer_id: 1,
 *
 *       // when this user started
 *       activated_on: Date(2021, 11, 4),
 *
 *       // last day to bill for user
 *       // should bill up to and including this date
 *       // since user had some access on this date
 *       deactivated_on: Date(2022, 4, 10)
 *     },
 *     {
 *       id: 2,
 *       name: "Employee #2",
 *       customer_id: 1,
 *
 *       // when this user started
 *       activated_on: Date(2021, 12, 4),
 *
 *       // hasn't been deactivated yet
 *       deactivated_on: nullopt
 *     },
 *   }
 */
int monthly_charge(const string year_month, const optional<Subscription> &subscription, const vector<User> &users)
{
  // Cost of monthly subscription:


  // No users active
  else if(users.empty())

  //Partial month active - include activation day and deactivation day

  // Active entire month
  return -1;
}
